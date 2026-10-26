/* Firmware entry: 0x48158cd0 */

void FUN_ram_48158cd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x50) != '\0') {
    uStack_14 = 0;
    iStack_1c = param_1;
    uStack_18 = param_3;
    FUN_ram_481a3b62(PTR_s_IP_EVENT_ram_481da530_ram_48237730,8,&iStack_1c,0xc,0);
  }
                    /* WARNING: Could not recover jumptable at 0x48158cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x2c))(*(undefined4 *)(param_1 + 0x28),param_2,param_3);
  return;
}


