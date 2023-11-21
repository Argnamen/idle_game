using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AppodealStack.Monetization.Api;
using AppodealStack.Monetization.Common;

public class AppondealADS : MonoBehaviour
{
	private void Start()
	{
		int adTypes = AppodealAdType.RewardedVideo;
		string appKey = "e214a98f085b2e1f2d943649cba435e06eff845f957bef27";
		AppodealCallbacks.Sdk.OnInitialized += OnInitializationFinished;
		Appodeal.Initialize(appKey, adTypes);
	} 
#region Initialization Callback
public void OnInitializationFinished(object sender, SdkInitializedEventArgs e)
	{
		Debug.Log("Initialization Finished");
	}
	#endregion
}
