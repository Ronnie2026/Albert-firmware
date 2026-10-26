/* Firmware entry: 0x481920ea */

undefined4 FUN_ram_481920ea(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: Invalid arguments passed\n",uVar1,
                   &DAT_ram_481e1b30);
  return 0x102;
}


