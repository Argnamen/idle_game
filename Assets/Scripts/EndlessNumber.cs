using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace EndlessNumber
{
    public static class EndlessText
    {
        public static string ConvertPoins(List<int> Point)
        { 
            string text = "";

            List<int> cost = Point;

            if (cost.Count == 1)
            {
                {
                    text = cost[0].ToString();
                }
            }
            else if (cost.Count == 2)
            {
                {
                    string drob = "0";

                    if (cost[0].ToString().Length >= 2)
                    {
                        drob = cost[0].ToString();
                    }
                    else if (cost[0].ToString().Length == 1)
                    {
                        drob = cost[0].ToString();
                    }

                    if (cost[1].ToString().Length < 3)
                    {
                        text = cost[1].ToString() + "," + drob + "k";
                    }
                    else
                    {
                        text = cost[1].ToString() + "," + drob + "k";
                    }
                }
            }
            else if (cost.Count == 3)
            {
                {
                    string drob = "0";

                    if (cost[1].ToString().Length >= 2)
                    {
                        drob = cost[1].ToString();
                    }
                    else if (cost[1].ToString().Length == 1)
                    {
                        drob = cost[1].ToString();
                    }

                    if (cost[2].ToString().Length < 3)
                    {
                        text = cost[2].ToString() + "," + drob + "Ml";
                    }
                    else
                    {
                        text = cost[2].ToString() + "," + drob + "Ml";
                    }
                }
            }
            else if (cost.Count == 4)
            {
                {
                    string drob = "0";

                    if (cost[2].ToString().Length >= 2)
                    {
                        drob = cost[2].ToString();
                    }
                    else if (cost[1].ToString().Length == 1)
                    {
                        drob = cost[2].ToString();
                    }

                    if (cost[3].ToString().Length < 3)
                    {
                        text = cost[3].ToString() + "," + drob + "Bl";
                    }
                    else
                    {
                        text = cost[3].ToString() + "," + drob + "Bl";
                    }
                }
            }
            else if (cost.Count == 5)
            {
                {
                    string drob = "0";

                    if (cost[3].ToString().Length >= 2)
                    {
                        drob = cost[3].ToString();
                    }
                    else if (cost[1].ToString().Length == 1)
                    {
                        drob = cost[3].ToString();
                    }

                    if (cost[4].ToString().Length < 3)
                    {
                        text = cost[4].ToString() + "," + drob + "T";
                    }
                    else
                    {
                        text = cost[4].ToString() + "," + drob + "T";
                    }
                }
            }
            else if (cost.Count >= 6)
            {
                {
                    string drob = "0";

                    if (cost[2].ToString().Length >= 2)
                    {
                        drob = cost[cost.Count - 2].ToString();
                    }
                    else if (cost[1].ToString().Length == 1)
                    {
                        drob = cost[cost.Count - 2].ToString();
                    }

                    if (cost[cost.Count - 1].ToString().Length < 3)
                    {
                        text = cost[cost.Count - 1].ToString() + "," + drob + (char)('a' + cost.Count - 6);
                    }
                    else
                    {
                        text = cost[cost.Count - 1].ToString() + "," + drob + (char)('a' + cost.Count - 6);
                    }
                }
            }

            return text;
        }


        public static string DPToText(List<int> listDP)
        {
            string text = "";

            if (listDP.Count == 1)
            {
                text = listDP[0].ToString();
            }
            else if (listDP.Count == 2)
            {

                string drob = "0";

                {
                    drob = listDP[0].ToString() + "";
                }

                if (drob.ToString().Length >= 3)
                {
                    text = listDP[1].ToString() + "," + drob + "k";
                }
                else if (drob.ToString().Length == 2)
                {
                    text = listDP[1].ToString() + ",0" + drob + "k";
                }
                else if (drob.ToString().Length == 1)
                {
                    text = listDP[1].ToString() + ",00" + drob + "k";
                }
                else if (drob.ToString().Length == 0)
                {
                    text = listDP[1].ToString() + ",000" + drob + "k";
                }

            }
            else if (listDP.Count == 3)
            {
                {
                    string drob = "0";

                    {
                        drob = listDP[1].ToString() + "";
                    }

                    if (drob.ToString().Length >= 3)
                    {
                        text = listDP[2].ToString() + "," + drob + "Ml";
                    }
                    else if (drob.ToString().Length == 2)
                    {
                        text = listDP[2].ToString() + ",0" + drob + "Ml";
                    }
                    else if (drob.ToString().Length == 1)
                    {
                        text = listDP[2].ToString() + ",00" + drob + "Ml";
                    }
                    else if (drob.ToString().Length == 0)
                    {
                        text = listDP[2].ToString() + ",000" + drob + "Ml";
                    }
                }
            }
            else if (listDP.Count == 4)
            {
                {
                    string drob = "0";

                    {
                        drob = listDP[2].ToString() + "";
                    }

                    if (drob.ToString().Length >= 3)
                    {
                        text = listDP[3].ToString() + "," + drob + "Bl";
                    }
                    else if (drob.ToString().Length == 2)
                    {
                        text = listDP[3].ToString() + ",0" + drob + "Bl";
                    }
                    else if (drob.ToString().Length == 1)
                    {
                        text = listDP[3].ToString() + ",00" + drob + "Bl";
                    }
                    else if (drob.ToString().Length == 0)
                    {
                        text = listDP[3].ToString() + ",000" + drob + "Bl";
                    }
                }
            }
            else if (listDP.Count == 5)
            {
                {
                    string drob = "0";

                    {
                        drob = listDP[3].ToString() + "";
                    }

                    if (drob.ToString().Length >= 3)
                    {
                        text = listDP[4].ToString() + "," + drob + "T";
                    }
                    else if (drob.ToString().Length == 2)
                    {
                        text = listDP[4].ToString() + ",0" + drob + "T";
                    }
                    else if (drob.ToString().Length == 1)
                    {
                        text = listDP[4].ToString() + ",00" + drob + "T";
                    }
                    else if (drob.ToString().Length == 0)
                    {
                        text = listDP[4].ToString() + ",000" + drob + "T";
                    }
                }
            }
            else if (listDP.Count >= 6)
            {
                {
                    string drob = "0";

                    {
                        drob = listDP[listDP.Count - 2].ToString() + "";
                    }

                    if (drob.ToString().Length >= 3)
                    {
                        text = listDP[listDP.Count - 1].ToString() + "," + drob + (char)('a' + listDP.Count - 6);
                    }
                    else if (drob.ToString().Length == 2)
                    {
                        text = listDP[listDP.Count - 1].ToString() + ",0" + drob + (char)('a' + listDP.Count - 6);
                    }
                    else if (drob.ToString().Length == 1)
                    {
                        text = listDP[listDP.Count - 1].ToString() + ",00" + drob + (char)('a' + listDP.Count - 6);
                    }
                    else if (drob.ToString().Length == 0)
                    {
                        text = listDP[listDP.Count - 1].ToString() + ",000" + drob + (char)('a' + listDP.Count - 6);
                    }
                }
            }

            if (text == "")
            {
                text = "0";
            }

            return text;

        }

    }
}
