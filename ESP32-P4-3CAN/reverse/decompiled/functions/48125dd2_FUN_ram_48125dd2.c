/* Firmware entry: 0x48125dd2 */

void FUN_ram_48125dd2(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((DAT_ram_4ff6e074 != 0) && (*param_1 == 0x82)) &&
      (uVar1 = FUN_ram_48126e34(DAT_ram_4ff6e074), (uVar1 & 0x20) != 0)) &&
     (iVar2 = FUN_ram_481594e8(*(undefined4 *)(DAT_ram_4ff6e074 + 4)), iVar2 != 0)) {
    uVar6 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/AP.cpp"
                            );
    uVar4 = FUN_ram_480018de(iVar2);
    uVar5 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to enable IPv6 Link Local on AP:  0x%x: %s\r\n",
                     uVar5,uVar3,0x5e,"_onApArduinoEvent",iVar2,uVar4);
    return;
  }
  return;
}


