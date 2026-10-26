/* Firmware entry: 0x4813d740 */

undefined4 FUN_ram_4813d740(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0xfffffff0;
  }
  uVar2 = *(uint *)(param_1 + 0x3c);
  uVar1 = 1;
  if (uVar2 == 1) goto LAB_ram_4813d790;
  if (param_2 == 0) {
    if (param_3 != 0) {
      if (uVar2 < 5) {
        if (uVar2 < 3) {
LAB_ram_4813d790:
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0xfffffff5;
        }
      }
      else if (uVar2 != 7) goto LAB_ram_4813d790;
      uVar1 = 0;
LAB_ram_4813d766:
      uVar1 = FUN_ram_4813d520(param_1,uVar1);
      return uVar1;
    }
  }
  else {
    *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 0x10;
    if (param_3 != 0) goto LAB_ram_4813d766;
    if (*(int *)(param_1 + 0xc4) != 0) {
      FUN_ram_4813ac74(*(int *)(param_1 + 0xc4),1);
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
  }
  return 0;
}


