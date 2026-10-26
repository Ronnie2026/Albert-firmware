/* Firmware entry: 0x48022e0e */

undefined4
FUN_ram_48022e0e(int param_1,undefined1 param_2,int param_3,int param_4,undefined1 param_5,
                int param_6,code *param_7,undefined1 param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  code *pcStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_48 = 0;
  uStack_44 = 0;
  iStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  pcStack_34 = (code *)0x0;
  iVar1 = FUN_ram_48010184();
  if (((param_3 == 0) || (0x5f3 < (param_4 - 1U & 0xffff))) || (iVar1 == 0)) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"H_SDIO_DRV",
                     "E (%lu) %s: tx fail: NULL buff, invalid len (%u) or len > max len (%u), transport_up(%u))\n"
                     ,uVar3,"H_SDIO_DRV",param_4,0x5f4,iVar1);
  }
  else {
    uStack_38._0_3_ = CONCAT12(param_5,(undefined2)uStack_38);
    uStack_44._0_2_ = CONCAT11(param_2,(char)param_1);
    uStack_3c = CONCAT22((short)param_4,(undefined2)uStack_3c);
    uStack_3c = CONCAT31(uStack_3c._1_3_,param_8);
    iVar1 = 0;
    if (param_1 != 3) {
      iVar1 = (param_1 != 4) + 1;
    }
    iStack_48 = param_6;
    iStack_40 = param_3;
    pcStack_34 = param_7;
    iVar2 = FUN_ram_4ff2bac4();
    if (((iVar2 == 0) && ((&DAT_ram_4ff5b2f4)[iVar1] != 0)) &&
       ((DAT_ram_4ff6dbbc != 0 &&
        (iVar1 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x38))((&DAT_ram_4ff5b2f4)[iVar1],&iStack_48,0)
        , iVar1 == 0)))) {
      iVar1 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x60))(DAT_ram_4ff6dbbc);
      if (iVar1 == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      FUN_ram_4ff2b990(7,0xffffffff,param_4);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffffff;
    }
  }
  if ((param_7 != (code *)0x0) && (param_6 != 0)) {
    (*param_7)(param_6);
  }
  return 0xffffffff;
}


