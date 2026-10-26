/* Firmware entry: 0x48025a72 */

undefined4 FUN_ram_48025a72(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [20];
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff32b00(auStack_38);
  if (iStack_24 != param_1) {
    iVar1 = FUN_ram_4ff3277e(param_1,auStack_50);
    if (iVar1 == 0) {
      uVar5 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-cpu.c"
                              );
      puVar3 = (undefined4 *)FUN_ram_4ff45080(0x100,1);
      *puVar3 = 0x303034;
      FUN_ram_4819ad74((int)puVar3 + 3,0xfd,&DAT_ram_481c2714);
      uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): CPU clock could not be set to %u MHz. Supported frequencies: %s\r\n"
                       ,uVar4,uVar2,0x10e,"setCpuFrequencyMhz",param_1,puVar3);
      return 0;
    }
    if (DAT_ram_4ff6dc0c != 0) {
      FUN_ram_480259d0(0);
    }
    FUN_ram_4ff32a0e(auStack_50);
    if (DAT_ram_4ff6dc0c != 0) {
      FUN_ram_480259d0(1);
    }
  }
  return 1;
}


