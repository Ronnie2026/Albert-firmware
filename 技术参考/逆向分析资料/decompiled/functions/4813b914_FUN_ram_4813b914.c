/* Firmware entry: 0x4813b914 */

undefined4 FUN_ram_4813b914(int param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    return 0xfffffffa;
  }
  uVar1 = param_2[5];
  *(char *)(param_1 + 0x2c) = (char)uVar1;
  uVar7 = *param_2;
  if ((char)uVar1 != '\x06') {
    *(uint *)(param_1 + 0x18) = uVar7;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x28) = 0;
LAB_ram_4813b942:
    *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 1;
    return 0;
  }
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar1 = param_2[4];
  *(uint *)(param_1 + 0x18) = uVar7;
  *(uint *)(param_1 + 0x1c) = uVar4;
  *(uint *)(param_1 + 0x20) = uVar5;
  *(uint *)(param_1 + 0x24) = uVar6;
  *(char *)(param_1 + 0x28) = (char)uVar1;
  if ((char)uVar1 == '\0') {
    if ((uVar7 & 0xc0ff) != 0x80fe) {
      if (((uVar7 & 0x8fff) - 0x1ff & 0xfffffeff) != 0) goto LAB_ram_4813b994;
    }
    iVar3 = FUN_ram_48148070(param_1,param_1 + 0x18);
    if (iVar3 != 0) {
      if (((*(uint *)(param_1 + 0x18) & 0xc0ff) == 0x80fe) ||
         (cVar2 = '\0', ((*(uint *)(param_1 + 0x18) & 0x8fff) - 0x1ff & 0xfffffeff) == 0)) {
        cVar2 = *(char *)(iVar3 + 0xea) + '\x01';
      }
      *(char *)(param_1 + 0x28) = cVar2;
      goto LAB_ram_4813b942;
    }
  }
LAB_ram_4813b994:
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 1;
  return 0;
}


