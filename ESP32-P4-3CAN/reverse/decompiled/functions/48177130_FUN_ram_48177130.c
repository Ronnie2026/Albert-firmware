/* Firmware entry: 0x48177130 */

undefined4
FUN_ram_48177130(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 == 0) {
    puVar1 = (undefined4 *)(*(code *)PTR_FUN_ram_481779f2_ram_482399b4)();
    param_1[1] = (int)puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0xffffc080;
    }
    else {
      *param_1 = (int)&DAT_ram_48239990;
      *puVar1 = param_2;
      puVar1[1] = param_3;
      puVar1[2] = param_4;
      puVar1[3] = param_5;
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffc180;
}


