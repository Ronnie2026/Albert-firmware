/* Firmware entry: 0x48147794 */

bool FUN_ram_48147794(uint param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 - 1 < 0xfffffffe) {
    bVar1 = *(byte *)(param_2 + 0xe7) & 2;
    if ((*(byte *)(param_2 + 0xe7) & 2) != 0) {
      bVar1 = 0;
      if ((*(uint *)(param_2 + 4) != param_1) &&
         (((*(uint *)(param_2 + 4) ^ param_1) & *(uint *)(param_2 + 0x1c)) == 0)) {
        uVar2 = ~*(uint *)(param_2 + 0x1c);
        return (param_1 & uVar2) == uVar2;
      }
    }
  }
  else {
    bVar1 = 1;
  }
  return (bool)bVar1;
}


