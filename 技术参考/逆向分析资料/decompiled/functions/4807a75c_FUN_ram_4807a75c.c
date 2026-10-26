/* Firmware entry: 0x4807a75c */

bool FUN_ram_4807a75c(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 7) {
    iVar2 = FUN_ram_4ff4511a(param_2,"/health");
    bVar1 = true;
    if (iVar2 != 0) {
      iVar2 = FUN_ram_4ff4511a(param_2,"/status",7);
      return iVar2 == 0;
    }
  }
  else if (param_1 == 0xc) {
    iVar2 = FUN_ram_4ff4511a(param_2,"/status_fast");
    bVar1 = iVar2 == 0;
  }
  else {
    if (param_1 == 0xd) {
      iVar2 = FUN_ram_4ff4511a(param_2,"/cloud/status");
      return iVar2 == 0;
    }
    if (param_1 == 0x12) {
      iVar2 = FUN_ram_4ff4511a(param_2,"/ota/online/status");
      return iVar2 == 0;
    }
    bVar1 = false;
  }
  return bVar1;
}


