/* Firmware entry: 0x48172538 */

void FUN_ram_48172538(byte param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar1 = param_2;
  if (param_3 != 0) {
    do {
      pbVar2 = pbVar1 + 1;
      *pbVar1 = *pbVar1 & ~param_1;
      pbVar1 = pbVar2;
    } while (pbVar2 != param_2 + param_3);
  }
  return;
}


