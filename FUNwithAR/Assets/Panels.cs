using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Panels : MonoBehaviour
{

    public GameObject Enable_Disable;

        public void Enable()
        {
            Enable_Disable.SetActive(true);
        }
        public void Disable()
        {
            Enable_Disable.SetActive(false);
        }
    }
