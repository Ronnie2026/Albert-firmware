/* Firmware entry: 0x48188c6c */

int FUN_ram_48188c6c(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar1 = strchr(param_1,0x3a);
  if (pcVar1 != (char *)0x0) {
    iVar2 = FUN_ram_48137596(10,param_1,param_2);
    return (uint)(iVar2 == 1) << 4;
  }
  iVar2 = FUN_ram_48137596(2,param_1,param_2);
  return (uint)(iVar2 == 1) << 2;
}


