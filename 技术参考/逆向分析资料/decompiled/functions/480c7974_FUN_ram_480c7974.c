/* Firmware entry: 0x480c7974 */

void FUN_ram_480c7974(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  char local_d4;
  char cStack_d3;
  undefined4 auStack_d0 [27];
  char cStack_63;
  char cStack_5f;
  char cStack_4a;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0x58);
  FUN_ram_4ff3ec14(iVar1 + 0xb18,0xffffffff);
  puVar8 = (undefined4 *)(iVar1 + 0xb38);
  pcVar5 = &local_d4;
  do {
    uVar2 = puVar8[1];
    uVar3 = puVar8[2];
    uVar4 = puVar8[3];
    *(undefined4 *)pcVar5 = *puVar8;
    *(undefined4 *)(pcVar5 + 4) = uVar2;
    *(undefined4 *)(pcVar5 + 8) = uVar3;
    *(undefined4 *)(pcVar5 + 0xc) = uVar4;
    puVar8 = puVar8 + 4;
    pcVar5 = pcVar5 + 0x10;
  } while (puVar8 != (undefined4 *)(iVar1 + 0xbd8));
  *(undefined4 *)pcVar5 = *puVar8;
  FUN_ram_4ff3ee10(iVar1 + 0xb18);
  if (((cStack_d3 == '\f') || (*(char *)((int)param_2 + 0xd) != '\x04')) ||
     (((cStack_63 == '\0' || (cStack_5f == '\0')) &&
      (((local_d4 == '\0' || (cStack_4a == '\0')) || (cStack_d3 != '\x0e')))))) {
    return;
  }
  iVar1 = *param_2;
  if (iVar1 == 0x255) {
    puVar8 = (undefined4 *)(param_1 + 0xc04);
    iVar9 = param_2[1];
    FUN_ram_4ff3ec14(param_1 + 0xc64,0xffffffff);
    *(undefined4 *)(param_1 + 0xc08) = param_3;
    iVar6 = *(int *)(param_1 + 0xc0c) + 1;
    *(undefined1 *)(param_1 + 0xc10) = 1;
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    *(int *)(param_1 + 0xc0c) = iVar6;
    if ((char)iVar9 == '\x04') goto LAB_ram_480c7ac0;
    *(undefined1 *)(param_1 + 0xc11) = 0;
    *(undefined4 *)(param_1 + 0xc04) = 0;
    if (*(char *)(param_1 + 0xc60) != '\0') goto LAB_ram_480c7a76;
LAB_ram_480c7af8:
    iVar1 = 0xc24;
  }
  else {
    if (iVar1 != 299) {
      return;
    }
    iVar9 = param_2[1];
    FUN_ram_4ff3ec14(param_1 + 0xc64,0xffffffff);
    *(undefined4 *)(param_1 + 0xc18) = param_3;
    iVar6 = *(int *)(param_1 + 0xc1c) + 1;
    *(undefined1 *)(param_1 + 0xc20) = 1;
    puVar8 = (undefined4 *)(param_1 + 0xc14);
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    *(int *)(param_1 + 0xc1c) = iVar6;
    if ((char)iVar9 == '\x04') {
LAB_ram_480c7ac0:
      *(undefined1 *)((int)puVar8 + 0xd) = 1;
      *puVar8 = 0;
      iVar9 = 0;
      do {
        iVar6 = iVar9 + 5;
        puVar7 = (undefined1 *)((int)puVar8 + iVar9);
        iVar9 = iVar9 + 1;
        *puVar7 = *(undefined1 *)((int)param_2 + iVar6);
      } while (iVar9 != 4);
      if (*(char *)(param_1 + 0xc60) != '\0') goto LAB_ram_480c7a76;
      if (iVar1 == 0x255) goto LAB_ram_480c7af8;
    }
    else {
      *(undefined1 *)(param_1 + 0xc21) = 0;
      *(undefined4 *)(param_1 + 0xc14) = 0;
      if (*(char *)(param_1 + 0xc60) != '\0') goto LAB_ram_480c7a76;
    }
    iVar1 = 0xc34;
  }
  FUN_ram_4ff45158(param_1 + iVar1,puVar8,0xe);
LAB_ram_480c7a76:
  FUN_ram_4ff3ee10(param_1 + 0xc64);
  return;
}


