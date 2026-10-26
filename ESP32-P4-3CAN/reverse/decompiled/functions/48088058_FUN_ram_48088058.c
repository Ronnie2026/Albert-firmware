/* Firmware entry: 0x48088058 */

bool FUN_ram_48088058(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_978 [1204];
  undefined1 auStack_4c4 [1204];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_978,0,0x4b3);
  memset(auStack_4c4,0,0x4b3);
  iVar1 = FUN_ram_480713be(param_1,0,auStack_978);
  if ((iVar1 != 0) && (iVar1 = FUN_ram_480713be(param_2,0,auStack_4c4), iVar1 != 0)) {
    iVar1 = FUN_ram_4ff4511a(auStack_978,auStack_4c4,0x4b3);
    return iVar1 == 0;
  }
  return false;
}


