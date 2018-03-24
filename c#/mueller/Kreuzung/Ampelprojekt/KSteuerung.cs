using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ampelprojekt {
    class KSteuerung {
        private int Zustand;
        private const int ZUSTAND_AUS          = 0;
        private const int ZUSTAND_GELB_GELB    = 1;
        private const int ZUSTAND_ROT_ROT      = 2;
        private const int ZUSTAND_ROTGELB_ROT  = 3;
        private const int ZUSTAND_GRUEN_ROT    = 4;
        private const int ZUSTAND_GELB_ROT     = 5;
        private const int ZUSTAND_ROT_ROT2     = 6;
        private const int ZUSTAND_ROT_ROTGELB  = 7;
        private const int ZUSTAND_ROT_GRUEN    = 8;
        private const int ZUSTAND_ROT_GELB     = 9;

        private Steuerung AmpelNord = new Steuerung(500, 0);
        private Steuerung AmpelSued = new Steuerung(500, 500);
        private Steuerung AmpelWest = new Steuerung(100, 300);
        private Steuerung AmpelOst  = new Steuerung(900, 300);

        //private Steuerung[] strasseA = new Steuerung[2];

        public KSteuerung() {
            Zustand = ZUSTAND_AUS;
            /*strasseA[0] = AmpelNord;
            strasseA[1] = AmpelSued;*/

        }


        public void ein() {
            if(Zustand == ZUSTAND_AUS) {
                Zustand = ZUSTAND_GELB_GELB;
                AmpelNord.ein();
                AmpelSued.ein();
                AmpelWest.ein();
                AmpelOst.ein();
            }
        }

        public void um() {
            switch(Zustand) {
                case ZUSTAND_GELB_GELB:
                    AmpelNord.um();
                    AmpelSued.um();
                    AmpelWest.um();
                    AmpelOst.um();
                    Zustand = ZUSTAND_ROT_ROT;
                    break;
                case ZUSTAND_ROT_ROT:
                    AmpelNord.um();
                    AmpelSued.um();
                    Zustand = ZUSTAND_ROTGELB_ROT;
                    break;
                case ZUSTAND_ROTGELB_ROT:
                    AmpelNord.um();
                    AmpelSued.um();
                    Zustand = ZUSTAND_GRUEN_ROT;
                    break;
                case ZUSTAND_GRUEN_ROT:
                    AmpelNord.um();
                    AmpelSued.um();
                    Zustand = ZUSTAND_GELB_ROT;
                    break;
                case ZUSTAND_GELB_ROT:
                    AmpelNord.um();
                    AmpelSued.um();
                    Zustand = ZUSTAND_ROT_ROT2;
                    break;
                case ZUSTAND_ROT_ROT2:
                    AmpelWest.um();
                    AmpelOst.um();
                    Zustand = ZUSTAND_ROT_ROTGELB;
                    break;
                case ZUSTAND_ROT_ROTGELB:
                    AmpelWest.um();
                    AmpelOst.um();
                    Zustand = ZUSTAND_ROT_GRUEN;
                    break;
                case ZUSTAND_ROT_GRUEN:
                    AmpelWest.um();
                    AmpelOst.um();
                    Zustand = ZUSTAND_ROT_GELB;
                    break;
                case ZUSTAND_ROT_GELB:
                    AmpelWest.um();
                    AmpelOst.um();
                    Zustand = ZUSTAND_ROT_ROT;
                    break;
            }
        }

        public void aus() {
            if (Zustand == ZUSTAND_ROT_ROT || Zustand == ZUSTAND_ROT_ROT2) {
                Zustand = ZUSTAND_AUS;
                AmpelNord.aus();
                AmpelSued.aus();
                AmpelWest.aus();
                AmpelOst.aus();
            }
        }

        public void blinken() {
            throw new Exception("Stub!");
        }

        //private void schalten(Steuerung[] s, )
    }
}
