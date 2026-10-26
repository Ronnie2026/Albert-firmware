/* Firmware entry: 0x4814335a */

int FUN_ram_4814335a(int param_1,uint *param_2,undefined2 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return -0x10;
  }
  if (param_2 == (uint *)0x0) {
    iVar8 = -0x10;
  }
  else {
    if (*(short *)(param_1 + 0x3a) == 0) {
      iVar8 = FUN_ram_48142c4a(param_1,param_1,0);
      if (iVar8 != 0) {
        return iVar8;
      }
      cVar1 = (char)param_2[5];
      *(char *)(param_1 + 0x2c) = cVar1;
      uVar7 = *param_2;
    }
    else {
      cVar1 = (char)param_2[5];
      *(char *)(param_1 + 0x2c) = cVar1;
      uVar7 = *param_2;
    }
    if (cVar1 == '\x06') {
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      uVar2 = param_2[4];
      *(uint *)(param_1 + 0x18) = uVar7;
      *(uint *)(param_1 + 0x1c) = uVar4;
      *(uint *)(param_1 + 0x20) = uVar5;
      *(uint *)(param_1 + 0x24) = uVar6;
      *(char *)(param_1 + 0x28) = (char)uVar2;
      if (((char)uVar2 == '\0') &&
         ((((uVar7 & 0xc0ff) == 0x80fe || (((uVar7 & 0x8fff) - 0x1ff & 0xfffffeff) == 0)) &&
          (iVar8 = FUN_ram_48148070(param_1,param_1 + 0x18), iVar8 != 0)))) {
        if (((*(uint *)(param_1 + 0x18) & 0xc0ff) == 0x80fe) ||
           (((*(uint *)(param_1 + 0x18) & 0x8fff) - 0x1ff & 0xfffffeff) == 0)) {
          *(char *)(param_1 + 0x28) = *(char *)(iVar8 + 0xea) + '\x01';
        }
        else {
          *(undefined1 *)(param_1 + 0x28) = 0;
        }
      }
    }
    else {
      *(uint *)(param_1 + 0x18) = uVar7;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    iVar3 = DAT_ram_4ff6e208;
    *(undefined2 *)(param_1 + 0x3c) = param_3;
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 4;
    for (iVar8 = iVar3; iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x34)) {
      if (param_1 == iVar8) goto LAB_ram_481433c4;
    }
    *(int *)(param_1 + 0x34) = iVar3;
    DAT_ram_4ff6e208 = param_1;
LAB_ram_481433c4:
    iVar8 = 0;
  }
  return iVar8;
}


