/* Firmware entry: 0x481a5918 */

undefined4 FUN_ram_481a5918(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (undefined4 *)0x0) {
    param_1 = (undefined4 *)*param_1;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)*param_1;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_1[1];
    }
    return 0;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,"E (%lu) %s: %s(%d): invalid argument\n",uVar1,
                   &DAT_ram_481e0c8c,"gdma_get_group_channel_id",0x105);
  return 0x102;
}


