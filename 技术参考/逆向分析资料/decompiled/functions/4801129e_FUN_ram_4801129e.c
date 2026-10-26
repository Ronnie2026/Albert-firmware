/* Firmware entry: 0x4801129e */

undefined4 FUN_ram_4801129e(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  code *pcStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_38 = 0;
  uStack_34 = 0;
  iStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  pcStack_24 = (code *)0x0;
  if ((param_1 == (int *)0x0) || (uVar3 = (uint)*(ushort *)((int)param_1 + 0xe), uVar3 == 0)) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: %s:%u Invalid parameters\n",uVar1,"serial_ll",
                     "serial_ll_rx_handler",0x11f);
  }
  else if (((*(byte *)((int)param_1 + 5) < 2) &&
           (puVar4 = *(undefined4 **)(&DAT_ram_4ff6db60 + (uint)*(byte *)((int)param_1 + 5) * 4),
           puVar4 != (undefined4 *)0x0)) && (*(char *)(puVar4 + 3) == '\x01')) {
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
      if (DAT_ram_4ff6db6c == 0) {
        DAT_ram_4ff6db6c = (**(code **)(PTR_PTR_ram_4ff47e40 + 8))(uVar3);
      }
      else {
        DAT_ram_4ff6db6c =
             (**(code **)(PTR_PTR_ram_4ff47e40 + 0x14))(DAT_ram_4ff6db6c,DAT_ram_4ff6db68 + uVar3);
      }
      if (DAT_ram_4ff6db6c != 0) {
        (**(code **)PTR_PTR_ram_4ff47e40)
                  (DAT_ram_4ff6db6c + DAT_ram_4ff6db68,param_1[2],
                   *(undefined2 *)((int)param_1 + 0xe));
        DAT_ram_4ff6db68 = (uint)*(ushort *)((int)param_1 + 0xe) + DAT_ram_4ff6db68;
        iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 8))();
        if (iVar2 == 0) {
          uVar1 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: Malloc failed, drop pkt\n",uVar1,"serial_ll");
        }
        else {
          (**(code **)PTR_PTR_ram_4ff47e40)(iVar2,DAT_ram_4ff6db6c,DAT_ram_4ff6db68);
          pcStack_24 = *(code **)(PTR_PTR_ram_4ff47e40 + 0x10);
          uStack_34._0_2_ = CONCAT11(*(undefined1 *)((int)param_1 + 5),3);
          uStack_2c = CONCAT22((short)DAT_ram_4ff6db68,(undefined2)uStack_2c);
          DAT_ram_4ff6db68 = 0;
          iStack_38 = iVar2;
          iStack_30 = iVar2;
          (*pcStack_24)(DAT_ram_4ff6db6c);
          DAT_ram_4ff6db6c = 0;
          iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x38))(*puVar4,&iStack_38,0xffffffff);
          if (iVar2 == 0) {
            if ((code *)puVar4[4] != (code *)0x0) {
              (*(code *)puVar4[4])();
              return 0;
            }
          }
          else {
            uVar1 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: Failed send serialif queue[%u]\n",uVar1,
                             "serial_ll",uStack_34._1_1_);
          }
        }
        goto LAB_ram_48011346;
      }
    }
    else {
      if (DAT_ram_4ff6db6c == 0) {
        DAT_ram_4ff6db6c = (**(code **)(PTR_PTR_ram_4ff47e40 + 8))(uVar3);
      }
      else {
        DAT_ram_4ff6db6c =
             (**(code **)(PTR_PTR_ram_4ff47e40 + 0x14))(DAT_ram_4ff6db6c,DAT_ram_4ff6db68 + uVar3);
      }
      if (DAT_ram_4ff6db6c != 0) {
        (**(code **)PTR_PTR_ram_4ff47e40)
                  (DAT_ram_4ff6db6c + DAT_ram_4ff6db68,param_1[2],
                   *(undefined2 *)((int)param_1 + 0xe));
        DAT_ram_4ff6db68 = DAT_ram_4ff6db68 + (uint)*(ushort *)((int)param_1 + 0xe);
        return 0;
      }
    }
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: Failed to allocate serial data\n",uVar1,"serial_ll")
    ;
  }
  else {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: %s Failed to get interface handle\n",uVar1,
                     "serial_ll","get_serial_ll_handle");
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: Serial interface not registered yet\n",uVar1,
                     "serial_ll");
  }
LAB_ram_48011346:
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: Err occurred, discard current buffer\n",uVar1,
                   "serial_ll");
  if (((code *)param_1[5] != (code *)0x0) && (*param_1 != 0)) {
    (*(code *)param_1[5])();
    *param_1 = 0;
  }
  DAT_ram_4ff6db68 = 0;
  if ((pcStack_24 != (code *)0x0) && (iStack_38 != 0)) {
    (*pcStack_24)();
    iStack_38 = 0;
  }
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(DAT_ram_4ff6db6c);
  return 0xffffffff;
}


