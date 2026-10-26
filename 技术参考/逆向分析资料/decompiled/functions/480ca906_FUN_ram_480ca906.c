/* Firmware entry: 0x480ca906 */

void FUN_ram_480ca906(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_c4 [43];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  FUN_ram_4ff3ec14(iVar1 + 0xb18,0xffffffff);
  puVar8 = (undefined4 *)(iVar1 + 0xb38);
  puVar6 = local_c4;
  do {
    uVar2 = puVar8[1];
    uVar3 = puVar8[2];
    uVar4 = puVar8[3];
    *puVar6 = *puVar8;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar8 = puVar8 + 4;
    puVar6 = puVar6 + 4;
  } while (puVar8 != (undefined4 *)(iVar1 + 0xbd8));
  *puVar6 = *puVar8;
  FUN_ram_4ff3ee10(iVar1 + 0xb18);
  if ((((char)param_1[0xa0] != '\0') && (*(char *)((int)param_1 + 0x281) != '\0')) &&
     (0x5dc < (uint)(param_2 - param_1[0xa2]))) {
    *(undefined1 *)((int)param_1 + 0x281) = 0;
    FUN_ram_480c6f6c(param_1,param_2);
    FUN_ram_480c90ae(param_1,local_c4,param_2);
  }
  if ((*(char *)((int)param_1 + 0x189) != '\0') && (500 < (uint)(param_2 - param_1[0xa7]))) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    param_1[0x61] = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    param_1[99] = 0;
    param_1[100] = 0;
    param_1[0x96] = 0;
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    *(undefined2 *)(param_1 + 0x9a) = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    *(undefined2 *)(param_1 + 0x9d) = 0;
    *(undefined1 *)((int)param_1 + 0x276) = 0;
    param_1[0x9e] = 0;
    *(undefined1 *)(param_1 + 0x7b) = 0;
    if (param_1[0x7d] + 1 == 0) {
      iVar1 = param_1[0x7e];
      param_1[0x7d] = 1;
    }
    else {
      iVar1 = param_1[0x7e];
      param_1[0x7d] = param_1[0x7d] + 1;
    }
    iVar1 = iVar1 + 1;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    param_1[0x7e] = iVar1;
    *(undefined2 *)((int)param_1 + 0x246) = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    *(undefined2 *)(param_1 + 0x95) = 0;
    param_1[0xa8] = 0;
    FUN_ram_4ff3ec14(param_1 + 4,0xffffffff);
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    FUN_ram_4ff3ee10(param_1 + 4);
    FUN_ram_4ff3ec14(param_1[2],0xffffffff);
    *(undefined1 *)(param_1[1] + 0x804) = 0;
    iVar1 = param_1[1];
    *(undefined1 *)(iVar1 + 0x810) = 0;
    iVar10 = param_1[1];
    *(undefined2 *)(iVar1 + 0x80e) = 0;
    *(undefined1 *)(iVar10 + 0x816) = 0;
    iVar1 = param_1[1];
    *(undefined2 *)(iVar10 + 0x812) = 0;
    *(undefined2 *)(iVar10 + 0x814) = 0;
    *(undefined1 *)(iVar1 + 0x817) = 0;
    *(undefined1 *)(param_1[1] + 0x818) = 0;
    *(undefined1 *)(param_1[1] + 0x835) = 0;
    iVar10 = param_1[1];
    iVar1 = param_1[2];
    *(undefined4 *)(iVar10 + 0x838) = 0;
    *(undefined4 *)(iVar10 + 0x83c) = 0;
    *(undefined2 *)(iVar10 + 0x81a) = 0;
    *(undefined4 *)(iVar10 + 0x81c) = 0;
    *(undefined4 *)(iVar10 + 0x820) = 0;
    *(undefined1 *)(iVar10 + 0x824) = 0;
    *(undefined2 *)(iVar10 + 0x828) = 0;
    *(undefined2 *)(iVar10 + 0x826) = 0;
    *(undefined4 *)(iVar10 + 0x82c) = 0;
    *(undefined4 *)(iVar10 + 0x830) = 0;
    *(undefined1 *)(iVar10 + 0x834) = 0;
    FUN_ram_4ff3ee10(iVar1);
  }
  if (((*(char *)((int)param_1 + 0x246) != '\0') && (*(char *)((int)param_1 + 0x24b) == '\0')) &&
     ((*(char *)((int)param_1 + 0x24a) == '\0' &&
      ((*(char *)((int)param_1 + 0x24e) != '\0' && ((uint)(param_2 - param_1[0x82]) < 0x1f5)))))) {
    uVar7 = param_1[0x81];
    uVar9 = param_1[0x83];
    uVar5 = uVar9 - uVar7;
    if (uVar9 < uVar7) {
      uVar5 = uVar7 - uVar9;
    }
    if ((((-(uint)(*(char *)((int)param_1 + 0x255) == '\0') & 0xffffffe1) + 0x51 < uVar5) &&
        (1999 < (uint)(param_2 - param_1[0x87]))) &&
       (((char)param_1[0x95] == '\0' || (1999 < (uint)(param_2 - param_1[0x8e]))))) {
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(undefined1 *)((int)param_1 + 0x24a) = 1;
      FUN_ram_480c7da6(param_1,local_c4);
    }
  }
  FUN_ram_4809ec88(param_1,local_c4);
  return;
}


