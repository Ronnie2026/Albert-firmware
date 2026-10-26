/* Firmware entry: 0x4802a530 */

undefined4 FUN_ram_4802a530(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(param_1,&DAT_ram_481df390);
  iVar1 = FUN_ram_48025ba6();
  param_2[3] = iVar1;
  do {
    uVar2 = (**(code **)(*param_2 + 0x1c))(param_2);
    if (-1 < (int)uVar2) {
      do {
        FUN_ram_4802af5a(param_1,uVar2 & 0xff);
        iVar1 = FUN_ram_48025ba6();
        param_2[3] = iVar1;
        while (uVar2 = (**(code **)(*param_2 + 0x1c))(param_2), (int)uVar2 < 0) {
          iVar1 = FUN_ram_48025ba6();
          if ((uint)param_2[2] <= (uint)(iVar1 - param_2[3])) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return param_1;
          }
        }
      } while( true );
    }
    iVar1 = FUN_ram_48025ba6();
  } while ((uint)(iVar1 - param_2[3]) < (uint)param_2[2]);
  return param_1;
}


