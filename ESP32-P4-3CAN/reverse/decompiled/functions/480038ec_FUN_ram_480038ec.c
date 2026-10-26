/* Firmware entry: 0x480038ec */

void FUN_ram_480038ec(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 2;
  *param_3 = 1;
  param_3[1] = 2;
  if (param_2 != 6) {
    iVar1 = (uint)((&PTR_LAB_ram_4ff20228_ram_4ff20080)[param_2] != &LAB_ram_4ff20228) << 1;
  }
  param_3[2] = iVar1;
  return;
}


