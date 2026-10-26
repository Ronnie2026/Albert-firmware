/* Firmware entry: 0x48158ac6 */

undefined4 FUN_ram_48158ac6(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_1 + 0x28) = *param_2;
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    uVar3 = param_2[4];
    *(undefined4 *)(param_1 + 0x2c) = param_2[1];
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    *(undefined4 *)(param_1 + 0x38) = uVar3;
    return 0;
  }
  return 0x5001;
}


