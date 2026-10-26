/* Firmware entry: 0x481a58b4 */

undefined4 FUN_ram_481a58b4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (undefined4 *)0x0) {
    FUN_ram_481a8ea8(*(int *)*param_1 + 8,((int *)*param_1)[1],param_1[4],0);
                    /* WARNING: Could not recover jumptable at 0x481a58d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)param_1[8])(param_1);
    return uVar1;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481e0c8c,"E (%lu) %s: %s(%d): invalid argument\n",uVar1,
                   &DAT_ram_481e0c8c,"gdma_del_channel",0xf5);
  return 0x102;
}


