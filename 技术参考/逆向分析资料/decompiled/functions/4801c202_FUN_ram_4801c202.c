/* Firmware entry: 0x4801c202 */

undefined4 FUN_ram_4801c202(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int aiStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  aiStack_24[0] = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0xc))(1,param_2 + 0xcU & 0xffff);
    if (iVar1 == 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"serial_if","E (%lu) %s: %s, Failed to allocate memory\n",uVar2,"serial_if"
                       ,"transport_pserial_send");
      return 0xffffffff;
    }
    if (DAT_ram_4ff6db9c == 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"serial_if","E (%lu) %s: Serial connection closed?\n\n",uVar2,"serial_if");
    }
    else {
      uVar3 = FUN_ram_4801bf1a(iVar1,param_1,param_2);
      aiStack_24[0] = (int)uVar3;
      if (aiStack_24[0] != 0) {
        iVar1 = FUN_ram_4801169c(DAT_ram_4ff6db9c,iVar1,aiStack_24[0],aiStack_24);
        if (iVar1 != 0) {
          uVar2 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"serial_if","E (%lu) %s: Failed to write TX data\n\n",uVar2,"serial_if"
                          );
          return 0xffffffff;
        }
        return 0;
      }
      uVar2 = FUN_ram_4ff44d14(0,(int)((ulonglong)uVar3 >> 0x20),0);
      FUN_ram_4ff44bf0(1,"serial_if","E (%lu) %s: Failed to compose TX data\n\n",uVar2,"serial_if");
    }
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(iVar1);
    return 0xffffffff;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(2,"serial_if","W (%lu) %s: Empty RPC data, ignored\n",uVar2,"serial_if");
  return 0xffffffff;
}


