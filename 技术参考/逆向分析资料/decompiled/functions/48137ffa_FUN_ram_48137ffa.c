/* Firmware entry: 0x48137ffa */

undefined4 FUN_ram_48137ffa(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar3 = param_1 + param_3 + -1;
  while( true ) {
    bVar1 = *param_1;
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((bVar1 != bVar2) &&
       ((0x19 < (byte)((bVar1 | 0x20) + 0x9f) || ((bVar1 | 0x20) != (bVar2 | 0x20))))) break;
    if ((param_1 == pbVar3) || (param_1 = param_1 + 1, bVar1 == 0)) {
      return 0;
    }
  }
  return 1;
}


