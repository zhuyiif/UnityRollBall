using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController1 : MonoBehaviour {

	private Vector2 leftFingerPos  = Vector2.zero;
	private Vector2 leftFingerLastPos  = Vector2.zero;
	private Vector2 leftFingerMovedBy  = Vector2.zero;

	public float slideMagnitudeX  = 0.0f;
	public float slideMagnitudeY  = 0.0f;

	//test gitadsf
	private Rigidbody rb;
	public float speed = 1;

	private float rotationRate = 0.3f;
	// Use this for initialization

	public Text countText;
	public Text winText;
	private int count;
	void Start () {
		rb = GetComponent<Rigidbody> ();

		count = 0;
		SetCountText ();
		winText.text = "";
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
				Vector3 movement = new Vector3 (touch.deltaPosition.x * rotationRate, 0, touch.deltaPosition.y * rotationRate);
				rb.AddForce (movement);


			} else if (touch.phase == TouchPhase.Ended) {
				Debug.Log("Touch phase Ended");    
			}
		}
	}

	void OnTriggerEnter(Collider other) 
	{
		if (other.gameObject.CompareTag ("Pick Up"))
		{
			other.gameObject.SetActive (false);
			count = count + 1;
			SetCountText ();
		}
	}

	void SetCountText ()
	{
		countText.text = "Count: " + count.ToString ();
		if (count >= 12)
		{
			winText.text = "You Win!";
		}
	}
}
