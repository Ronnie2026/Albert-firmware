/* Firmware entry: 0x480104b4 */

undefined4 *
FUN_ram_480104b4(undefined4 param_1,uint param_2,undefined1 param_3,undefined4 *param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (7 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff36e1a(1,"./build-p164-v32/p4_overlays/transport_drv.c",0x141,
                     "transport_drv_add_channel","if_type >= ESP_MAX_IF");
  }
  if ((param_4 == (undefined4 *)0x0) || (param_5 == 0)) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"transport","E (%lu) %s: %s fail for IF[%u]: tx or rx is NULL\n",uVar1,
                     "transport","transport_drv_add_channel",param_2);
    return (undefined4 *)0x0;
  }
  piVar5 = (int *)(&DAT_ram_4ff5b210 + param_2 * 4);
  if (*piVar5 != 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,"transport",
                     "W (%lu) %s: Channel [%u] already created, replace with new callbacks\n",uVar1,
                     "transport",param_2);
    if (*piVar5 != 0) {
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))();
      *piVar5 = 0;
    }
  }
  puVar2 = (undefined4 *)(**(code **)(PTR_PTR_ram_4ff47e40 + 0xc))(0x18,1);
  *(undefined4 **)(&DAT_ram_4ff5b210 + param_2 * 4) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("transport_drv.c",0x150,"transport_drv_add_channel","chan_arr[if_type]");
  }
  if (param_2 == 2) {
    puVar4 = &LAB_ram_4800fdac;
  }
  else if (param_2 == 3) {
    puVar4 = &DAT_ram_4800fd56;
  }
  else {
    if (param_2 != 1) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"transport",
                       "W (%lu) %s: Not yet supported ESP_Hosted interface for if_type[%u]\n",uVar1,
                       "transport",param_2);
      return (undefined4 *)0x0;
    }
    puVar4 = &DAT_ram_4800fe60;
  }
  *param_4 = puVar4;
  *puVar2 = param_1;
  *(undefined1 *)(puVar2 + 2) = param_3;
  uVar1 = *param_4;
  puVar2[1] = param_2;
  puVar2[4] = param_5;
  puVar2[3] = uVar1;
  iVar3 = FUN_ram_4801c372(0x600);
  puVar2[5] = iVar3;
  if (iVar3 != 0) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("transport_drv.c",0x170,"transport_drv_add_channel","channel->memp");
}


