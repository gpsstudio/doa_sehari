using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using UnityEngine.SceneManagement;

public class adsI : MonoBehaviour
{
    int scene;
    private InterstitialAd interstitial;
    bool check;

    void Start()
    {
        MobileAds.Initialize(initStatus => { });
        RequestConfiguration requestConfiguration = new RequestConfiguration.Builder()
        .SetTagForChildDirectedTreatment(TagForChildDirectedTreatment.True)
        .build();
        MobileAds.SetRequestConfiguration(requestConfiguration);
        RequestInterstitial();
        //interstitial.Show();
    }

    private void RequestInterstitial()
    {
#if UNITY_ANDROID
                string adUnitId = "ca-app-pub-9214006915655070/1264207483";
#else
        string adUnitId = "unexpected_platform";
#endif

        // Initialize an InterstitialAd.
        this.interstitial = new InterstitialAd(adUnitId);
        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the interstitial with the request.
        this.interstitial.LoadAd(request);
    }

    void Update()
    {
        if (!check)
        {
            if (interstitial.IsLoaded())
            {
                interstitial.Show();
                check = true;
            }
        }
    }
}
