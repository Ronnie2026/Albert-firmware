/* Firmware entry: 0x4812279a */

bool FUN_ram_4812279a(undefined4 *param_1,int param_2,uint param_3)

{
  byte abStack_11 [13];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  abStack_11[0] = (byte)param_3;
  if ((*(char *)(param_1 + 1) != '\0') && (param_2 != 0)) {
    FUN_ram_4815a2d0(*param_1,param_2,abStack_11);
    param_3 = (uint)abStack_11[0];
  }
  return param_3 == 1;
}


