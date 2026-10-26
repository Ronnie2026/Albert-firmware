/* Firmware entry: 0x481208d0 */

void FUN_ram_481208d0(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(&DAT_ram_4ff6be24,0,0xf0);
  iVar2 = DAT_ram_5010923c;
  if ((((DAT_ram_501091e0 == 0x504e4631) && (DAT_ram_501091e4 == 1)) && (DAT_ram_501091e8 - 1U < 7))
     && ((iVar6 = FUN_ram_4ff2b8dc(), iVar2 == iVar6 && (DAT_ram_50109239 != '\0')))) {
    pcVar10 = (char *)&DAT_ram_501091f8;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) goto LAB_ram_48120908;
    } while (pcVar10 != &DAT_ram_50109238);
    if (DAT_ram_50109238 == '\0') {
      puVar3 = &DAT_ram_501091e4;
      puVar4 = &DAT_ram_4ff6be24;
      do {
        puVar13 = puVar4;
        puVar11 = puVar3;
        uVar7 = puVar11[1];
        uVar8 = puVar11[2];
        uVar9 = puVar11[3];
        *puVar13 = *puVar11;
        puVar13[1] = uVar7;
        puVar13[2] = uVar8;
        puVar13[3] = uVar9;
        puVar3 = puVar11 + 4;
        puVar4 = puVar13 + 4;
      } while (puVar11 + 4 != (undefined4 *)0x50109234);
      uVar7 = puVar11[5];
      puVar13[4] = uRam50109234;
      puVar13[5] = uVar7;
    }
  }
LAB_ram_48120908:
  DAT_ram_501091e0 = 0;
  if (param_1 == (char *)0x0) {
LAB_ram_48120944:
    DAT_ram_4ff6e030 = false;
  }
  else {
    pcVar10 = param_1;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) goto LAB_ram_48120944;
    } while (pcVar10 != param_1 + 0x40);
    DAT_ram_4ff6e030 = param_1[0x40] == '\0';
  }
  pcVar10 = &DAT_ram_4ff6bde0;
  if ((bool)DAT_ram_4ff6e030) {
    do {
      pcVar5 = param_1 + 1;
      *pcVar10 = *param_1;
      if (pcVar10 == (char *)0x4ff6be20) break;
      pcVar12 = pcVar10 + 2;
      param_1 = param_1 + 2;
      pcVar10[1] = *pcVar5;
      pcVar10 = pcVar12;
    } while (pcVar12 != (char *)0x4ff6be21);
  }
  else {
    do {
      *pcVar10 = '\0';
      pcVar10 = pcVar10 + 1;
    } while (pcVar10 != (char *)0x4ff6be21);
  }
  fence();
  DAT_ram_4ff6e02c = 0;
  return;
}


