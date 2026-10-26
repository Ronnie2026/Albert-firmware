/* Firmware entry: 0x48123a74 */

undefined4 FUN_ram_48123a74(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = thunk_FUN_ram_4800f9c0(param_1,8);
  if (iVar1 == 0) {
    return 1;
  }
  uVar5 = FUN_ram_4ff21a0a();
  uVar2 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                          );
  uVar3 = FUN_ram_480018de(iVar1);
  uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to set LR Protocol: 0x%x: %s\r\n",uVar4,uVar2,0x22c
                   ,"_wifi_enable_lr",iVar1,uVar3);
  return 0;
}


