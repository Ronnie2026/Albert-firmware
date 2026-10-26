/* Firmware entry: 0x4801176e */

int FUN_ram_4801176e(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  code *pcVar6;
  ushort uStack_26;
  int aiStack_24 [4];
  
  iVar1 = DAT_ram_4ff6db70;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_26 = 0;
  aiStack_24[0] = 0;
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: Invalid parameters in read\n\r\n",uVar4,"serial");
    return 0;
  }
  *param_2 = 0;
  if (iVar1 == 0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: Semaphore not initialized\n\r\n",uVar4,"serial");
    return 0;
  }
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x6c))(iVar1,0xffffffff);
  if (((DAT_ram_4ff6db74 == 0) || (*(int *)(DAT_ram_4ff6db74 + 8) == 0)) ||
     (pcVar6 = *(code **)(*(int *)(DAT_ram_4ff6db74 + 8) + 4), pcVar6 == (code *)0x0)) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: serial interface refusing to read\n\r\n",uVar4,"serial"
                    );
    return 0;
  }
  iVar1 = (*pcVar6)(DAT_ram_4ff6db74,&uStack_26);
  if ((iVar1 == 0) || (uStack_26 == 0)) {
    uVar4 = FUN_ram_4ff44d14();
    pcVar5 = "E (%lu) %s: serial read failed\n\r\n";
LAB_ram_4801187e:
    FUN_ram_4ff44bf0(1,"serial",pcVar5,uVar4,"serial");
    return 0;
  }
  if (uStack_26 < 0xc) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))();
    uVar4 = FUN_ram_4ff44d14();
    pcVar5 = "E (%lu) %s: Incomplete serial buff, return\n\n";
    goto LAB_ram_4801187e;
  }
  iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0xc))(1,0xc);
  if (iVar2 != 0) {
    (**(code **)PTR_PTR_ram_4ff47e40)(iVar2,iVar1,0xc);
    iVar3 = FUN_ram_4801bf80(iVar2,aiStack_24);
    if ((iVar3 != 0) || (aiStack_24[0] == 0)) {
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(iVar2);
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: Failed to parse RX data \n\r\n",uVar4,"serial");
      goto LAB_ram_48011946;
    }
    if ((uint)uStack_26 < aiStack_24[0] + 0xcU) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"serial",
                       "E (%lu) %s: Buf read on serial iface is smaller than expected len\n\n",uVar4
                       ,"serial");
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(iVar2);
      goto LAB_ram_48011946;
    }
    if (aiStack_24[0] + 0xcU < (uint)uStack_26) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"serial",
                       "E (%lu) %s: Buf read on serial iface is smaller than expected len\n\n",uVar4
                       ,"serial");
    }
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(iVar2);
    iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0xc))(1,aiStack_24[0]);
    if (iVar2 != 0) {
      (**(code **)PTR_PTR_ram_4ff47e40)(iVar2,iVar1 + 0xc,aiStack_24[0]);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(iVar1);
      *param_2 = aiStack_24[0];
      return iVar2;
    }
  }
  uVar4 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: %s, Failed to allocate memory\n",uVar4,"serial",
                   "serial_drv_read");
LAB_ram_48011946:
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(iVar1);
  return 0;
}


