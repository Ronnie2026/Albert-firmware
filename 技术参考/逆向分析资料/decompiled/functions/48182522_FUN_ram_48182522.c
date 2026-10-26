/* Firmware entry: 0x48182522 */

int FUN_ram_48182522(byte *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_14 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(uint *)(param_1 + 0x7c);
  if ((uVar1 & 3) == 3) {
    if (*(int *)(param_1 + 0x28) == 0) {
      if (*(int *)(param_1 + 0x34) - 2U < 2) {
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        goto LAB_ram_481825a6;
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x30);
      *param_1 = (byte)((*(int *)(param_1 + 0x28) - 2U >> 1) << 3) |
                 *param_1 | (char)uVar3 - 1U | (*(int *)(param_1 + 0x24) != 0) << 6;
      uVar4 = *(uint *)(param_1 + 0x20);
      if (uVar3 != 0) {
        uVar5 = 0;
        do {
          param_1[0xf - uVar5] = (byte)uVar4;
          uVar5 = uVar5 + 1 & 0xff;
          uVar4 = uVar4 >> 8;
        } while (uVar5 < uVar3);
      }
      if (uVar4 == 0) {
        iVar2 = FUN_ram_48171b10(param_1 + 0x38,param_1,0x10,param_1,auStack_14);
        if (iVar2 == 0) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0;
        }
        *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x10;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar2;
      }
    }
    *(uint *)(param_1 + 0x7c) = uVar1 | 0x10;
    iVar2 = -0xd;
  }
  else {
LAB_ram_481825a6:
    iVar2 = 0;
  }
  return iVar2;
}


