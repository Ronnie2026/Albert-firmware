/* Firmware entry: 0x4813476e */

void FUN_ram_4813476e(int param_1,uint *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 1) != '\n') {
    uVar1 = *(undefined2 *)(param_1 + 2);
    *param_2 = *(uint *)(param_1 + 4);
    uVar1 = FUN_ram_48137fc8(uVar1);
    *param_3 = uVar1;
    *(undefined1 *)(param_2 + 5) = 0;
    return;
  }
  uVar4 = *(uint *)(param_1 + 8);
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  *(undefined1 *)(param_2 + 4) = 0;
  if ((uVar4 & 0xc0ff) != 0x80fe) {
    if (((uVar4 & 0x8fff) - 0x1ff & 0xfffffeff) != 0) goto LAB_ram_481347be;
  }
  *(char *)(param_2 + 4) = (char)*(undefined4 *)(param_1 + 0x18);
LAB_ram_481347be:
  uVar1 = FUN_ram_48137fc8(*(undefined2 *)(param_1 + 2));
  *param_3 = uVar1;
  *(undefined1 *)(param_2 + 5) = 6;
  return;
}


