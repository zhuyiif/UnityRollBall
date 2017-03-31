using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController1 : MonoBehaviour {

	private Vector2 leftFingerPos  = Vector2.zero;
	private Vector2 leftFingerLastPos  = Vector2.zero;
	private Vector2 leftFingerMovedBy  = Vector2.zero;

	public float slideMagnitudeX  = 0.0f;
	public float slideMagnitudeY  = 0.0f;

	//test gitadsf
	private Rigidbody rb;
	public float speed = 1;

	private float rotationRate = 3.0f;
	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody> ();
	}

	void FixedUpdate() {
		Debug.Log ("FixedUpdate");
		float moveH = Input.GetAxis ("Horizontal");
		float moveV = Input.GetAxis ("Vertical");

		Vector3 movement = new Vector3 (moveH, 0, moveV);
		rb.AddForce (movement*speed);
	}

	void Update () {
		Debug.Log ("Update");
		// get the user touch inpun
		foreach (Touch touch in Input.touches) {
			Debug.Log("Touching at: " + touch.position);

			if (touch.phase == TouchPhase.Began) {
				Debug.Log("Touch phase began at: " + touch.position);
			} else if (touch.phase == TouchPhase.Moved) {
				Debug.Log("Touch phase Moved");

				Debug.Log ("move x" + touch.deltaPosition.y * rotationRate);
				Debug.Log ("move y" + touch.deltaPosition.x * rotationRate);
				Vector3 movement = new Vector3 (touch.deltaPosition.y * rotationRate, 0, touch.deltaPosition.x * rotationRate);
				rb.AddForce (movement);


			} else if (touch.phase == TouchPhase.Ended) {
				Debug.Log("Touch phase Ended");    
			}
		}
	}
}
