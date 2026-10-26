/* Firmware entry: 0x48006cfe */

void FUN_ram_48006cfe(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = FUN_ram_4ff2fe04();
  uVar2 = (uint)uVar4 - DAT_ram_4ff6d968;
  iVar1 = (int)((ulonglong)uVar4 >> 0x20) - DAT_ram_4ff6d96c;
  uVar5 = FUN_ram_4ff21a0a();
  DAT_ram_4ff6dac0 = uVar2 - (int)uVar5;
  DAT_ram_4ff6dac4 =
       ((iVar1 - (uint)((uint)uVar4 < uVar2)) - (int)((ulonglong)uVar5 >> 0x20)) -
       (uint)(uVar2 < DAT_ram_4ff6dac0);
  iVar1 = FUN_ram_48000774(&LAB_ram_481a9db8);
  if (iVar1 == 0) {
    return;
  }
  uVar3 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(2,"system_time","W (%lu) %s: Register shutdown handler failed, err = 0x%x\n",
                   uVar3,"system_time",iVar1);
  return;
}


