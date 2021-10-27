//FIGURAS MUSICAIS                                       TEMPO/RESPIRAÇÃO

double FMC= 1.4000; /*FERMATA CURTA= 1.4000 BATIDA(S)*/  double RC = 0.2500; /*RESPIRAÇÃO CURTA*/
double FML= 2.2000; /*FERMATA LONGA= 2.2000 BATIDA(S)*/  double RL = 0.3500; /*RESPIRAÇÃO LONGA*/

double SB = 4.0000; /*SEMIBREVE    = 4      BATIDA(S)*/  double SBP = SB + (SB / 2); /*NOTA PONTUADA (ELA + METADE DELA)*/ double pSB = 4.0000; /*SEMIBREVE    = 4      BATIDA(S) PAUSA*/
double MM = 2.0000; /*MINIMA       = 2      BATIDA(S)*/  double MMP = MM + (MM / 2); /*NOTA PONTUADA (ELA + METADE DELA)*/ double pMM = 2.0000; /*MINIMA       = 2      BATIDA(S) PAUSA*/
double SM = 1.0000; /*SEMINIMA     = 1      BATIDA(S)*/  double SMP = SM + (SM / 2); /*NOTA PONTUADA (ELA + METADE DELA)*/ double pSM = 1.0000; /*SEMINIMA     = 1      BATIDA(S) PAUSA*/
double CC = 0.5000; /*COLCHEIA     = 0.5000 BATIDA(S)*/  double CCP = CC + (CC / 2); /*NOTA PONTUADA (ELA + METADE DELA)*/ double pCC = 0.5000; /*COLCHEIA     = 0.5000 BATIDA(S) PAUSA*/
double SC = 0.2500; /*SEMICOLCHEIA = 0.2500 BATIDA(S)*/  double SCP = SC + (SC / 2); /*NOTA PONTUADA (ELA + METADE DELA)*/ double pSC = 0.2500; /*SEMICOLCHEIA = 0.2500 BATIDA(S) PAUSA*/
double FS = 0.1250; /*FUSA         = 0.1250 BATIDA(S)*/  double FSP = FS + (FS / 2); /*NOTA PONTUADA (ELA + METADE DELA)*/ double pFS = 0.1250; /*FUSA         = 0.1250 BATIDA(S) PAUSA*/
double SF = 0.0625; /*SEMIFUSA     = 0.0625 BATIDA(S)*/  double SFP = SF + (SF / 2); /*NOTA PONTUADA (ELA + METADE DELA)*/ double pSF = 0.0625; /*SEMIFUSA     = 0.0625 BATIDA(S) PAUSA*/

                                                                                                                           double pSBP = pSB + (pSB / 2);   /*VELE O MESMO DAS DE CIMA*/
                                                                                                                           double pMMP = pMM + (pMM / 2);   /*POREM SÃO PONTUADAS*/
                                                                                                                           double pSMP = pSM + (pSM / 2);   /*ELAS + METADE DELAS*/
                                                                                                                           double pCCP = pCC + (pCC / 2);
                                                                                                                           double pSCP = pSC + (pSC / 2);
                                                                                                                           double pFSP = pFS + (pFS / 2);
                                                                                                                           double pSFP = pSF + (pSF / 2);


//NOTAS MUSICAIS EM HERTZ

double Si0= 246.941635; /*NATURAL*/
double Do = 261.625519; /*NATURAL*/ double Dob = Si0; /*BEMOL*/ double DoS = 277.182648; /*SUSTENIDO*/
double Re = 293.664734; /*NATURAL*/ double Reb = DoS; /*BEMOL*/ double ReS = 311.126984; /*SUSTENIDO*/
double Mi = 329.627533; /*NATURAL*/ double Mib = ReS; /*BEMOL*/ double MiS = 349.228241; /*SUSTENIDO*/
double Fa = 349.228241; /*NATURAL*/ double Fab = Mi ; /*BEMOL*/ double FaS = 369.994385; /*SUSTENIDO*/
double So = 391.995392; /*NATURAL*/ double Sob = FaS; /*BEMOL*/ double SoS = 415.304688; /*SUSTENIDO*/
double La = 440.000000; /*NATURAL*/ double Lab = SoS; /*BEMOL*/ double LaS = 466.163788; /*SUSTENIDO*/
double Si = 493.883301; /*NATURAL*/ double Sib = LaS; /*BEMOL*/ double SiS = 523.251099; /*SUSTENIDO*/

//NOTAS MUSICAIS 1 OITAVA ACIMA EM HERTZ

double Do1 = 523.251099; /*NATURAL*/ double Dob1 = Si  ; /*BEMOL*/ double DoS1 = 554.365234;  /*SUSTENIDO*/
double Re1 = 587.329529; /*NATURAL*/ double Reb1 = DoS1; /*BEMOL*/ double ReS1 = 622.253906;  /*SUSTENIDO*/
double Mi1 = 659.255127; /*NATURAL*/ double Mib1 = ReS1; /*BEMOL*/ double MiS1 = 698.456482;  /*SUSTENIDO*/
double Fa1 = 698.456482; /*NATURAL*/ double Fab1 = Mi1 ; /*BEMOL*/ double FaS1 = 739.988831;  /*SUSTENIDO*/
double So1 = 783.990845; /*NATURAL*/ double Sob1 = FaS1; /*BEMOL*/ double SoS1 = 830.609375;  /*SUSTENIDO*/
double La1 = 880.000000; /*NATURAL*/ double Lab1 = SoS1; /*BEMOL*/ double LaS1 = 932.327576;  /*SUSTENIDO*/
double Si1 = 987.766602; /*NATURAL*/ double Sib1 = LaS1; /*BEMOL*/ double SiS1 = 1046.502075; /*SUSTENIDO*/

//NOTAS MUSICAIS 2 OITAVAS ACIMA EM HERTZ

double Do2 = 1046.502075; /*NATURAL*/ double Dob2 = Si1 ; /*BEMOL*/ double DoS2 = 1108.730591;  /*SUSTENIDO*/
double Re2 = 1174.659058; /*NATURAL*/ double Reb2 = DoS2; /*BEMOL*/ double ReS2 = 1244.507935;  /*SUSTENIDO*/
double Mi2 = 1318.510254; /*NATURAL*/ double Mib2 = ReS2; /*BEMOL*/ double MiS2 = 1396.912964;  /*SUSTENIDO*/
double Fa2 = 1396.912964; /*NATURAL*/ double Fab2 = Mi2 ; /*BEMOL*/ double FaS2 = 1479.977539;  /*SUSTENIDO*/
double So2 = 1567.981812; /*NATURAL*/ double Sob2 = FaS2; /*BEMOL*/ double SoS2 = 1661.218750;  /*SUSTENIDO*/
double La2 = 1760.000000; /*NATURAL*/ double Lab2 = SoS2; /*BEMOL*/ double LaS2 = 1864.654785;  /*SUSTENIDO*/
double Si2 = 1975.533325; /*NATURAL*/ double Sib2 = LaS2; /*BEMOL*/ double SiS2 = 2093.004395;  /*SUSTENIDO*/
