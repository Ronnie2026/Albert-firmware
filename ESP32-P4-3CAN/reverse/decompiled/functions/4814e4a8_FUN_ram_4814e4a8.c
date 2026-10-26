/* Firmware entry: 0x4814e4a8 */

undefined4 FUN_ram_4814e4a8(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)FUN_ram_48139392(4);
  *param_1 = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_ram_4ff3add0(param_2,4,0);
    param_1 = (int *)*param_1;
    *puVar1 = uVar2;
    if (*param_1 != 0) {
      return 0;
    }
    FUN_ram_481393fc(param_1);
  }
  return 0xffffffff;
}


