/* Firmware entry: 0x481512b2 */

void FUN_ram_481512b2(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar2 = ((uint *)*param_1)[2];
  if (uVar2 != 0) {
    if ((*(uint *)*param_1 & 0xf0) == 0x10) {
      uVar1 = param_1[2];
      while( true ) {
        uVar3 = uVar1;
        if (0xffff < uVar1) {
          uVar3 = 0xffff;
        }
        uVar1 = uVar1 - uVar3;
        FUN_ram_4813c64a(uVar2,uVar3 & 0xffff);
        if (uVar1 == 0) break;
        uVar2 = *(uint *)(*param_1 + 8);
      }
      FUN_ram_4814e3a4(param_1[9]);
      return;
    }
  }
  FUN_ram_4814e3a4(param_1[9]);
  return;
}


