/* Firmware entry: 0x48120c38 */

/* Analyst-assigned name based on firmware call sites and string references. */

bool recovered_start_supervisor(char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  
  iVar3 = DAT_ram_501092a0;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e039 != '\0') {
    return DAT_ram_4ff6e034 != 0;
  }
  DAT_ram_4ff6e039 = 1;
  DAT_ram_4ff6e038 = 0;
  if (((DAT_ram_50109240 == 0x50344631) && (iVar7 = FUN_ram_4ff2bad8(), iVar3 == iVar7)) &&
     (DAT_ram_50109244 - 1U < 7)) {
    pcVar10 = (char *)&DAT_ram_5010925c;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) goto LAB_ram_48120c74;
    } while (pcVar10 != &DAT_ram_5010929c);
    if (DAT_ram_5010929c == '\0') {
      puVar4 = &DAT_ram_50109244;
      puVar5 = &DAT_ram_4ff6bf58;
      do {
        puVar13 = puVar5;
        puVar11 = puVar4;
        uVar14 = puVar11[1];
        uVar8 = puVar11[2];
        uVar9 = puVar11[3];
        *puVar13 = *puVar11;
        puVar13[1] = uVar14;
        puVar13[2] = uVar8;
        puVar13[3] = uVar9;
        puVar4 = puVar11 + 4;
        puVar5 = puVar13 + 4;
      } while (puVar11 + 4 != (undefined4 *)0x50109294);
      uVar8 = puVar11[5];
      uVar9 = puVar11[6];
      puVar13[4] = uRam50109294;
      puVar13[5] = uVar8;
      puVar13[6] = uVar9;
      DAT_ram_4ff6c014 = 1;
    }
  }
LAB_ram_48120c74:
  DAT_ram_50109240 = 0;
  bVar2 = false;
  if (param_1 != (char *)0x0) {
    pcVar10 = param_1;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) goto LAB_ram_48120cae;
    } while (pcVar10 != param_1 + 0x40);
    bVar2 = param_1[0x40] == '\0';
  }
LAB_ram_48120cae:
  pcVar10 = &DAT_ram_4ff6bf14;
  if (bVar2) {
    do {
      pcVar6 = param_1 + 1;
      *pcVar10 = *param_1;
      if (pcVar10 == &DAT_ram_4ff6bf54) break;
      pcVar12 = pcVar10 + 2;
      param_1 = param_1 + 2;
      pcVar10[1] = *pcVar6;
      pcVar10 = pcVar12;
    } while (pcVar12 != (char *)0x4ff6bf55);
  }
  else {
    do {
      *pcVar10 = '\0';
      pcVar10 = pcVar10 + 1;
    } while (pcVar10 != (char *)0x4ff6bf55);
  }
  DAT_ram_4ff6e034 =
       FUN_ram_4ff3e516(recovered_supervisor_task,"p4_supervisor",0x1000,0,3,&DAT_ram_4ff51e34,
                        &DAT_ram_4ff52e34,0);
  if (DAT_ram_4ff6e034 == 0) {
    uVar15 = FUN_ram_4ff21a0a();
    uVar8 = __divdi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),1000,0);
    FUN_ram_4ff2bbcc(7,0,uVar8);
  }
  return DAT_ram_4ff6e034 != 0;
}


