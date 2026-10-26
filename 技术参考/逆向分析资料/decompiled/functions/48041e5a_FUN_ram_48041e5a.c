/* Firmware entry: 0x48041e5a */

void FUN_ram_48041e5a(undefined2 *param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = 0;
  psVar1 = memset(param_1 + 1,0,0x3c);
  sVar3 = 5;
  do {
    sVar2 = sVar3 + 5;
    *psVar1 = sVar3;
    psVar1 = psVar1 + 1;
    sVar3 = sVar2;
  } while (sVar2 != 0x9b);
  return;
}


