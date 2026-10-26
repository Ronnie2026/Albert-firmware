/* Firmware entry: 0x481a4718 */

undefined4
FUN_ram_481a4718(int param_1,undefined *param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_event.c",0x313,"esp_event_handler_register_with_internal","event_loop");
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_event.c",0x314,"esp_event_handler_register_with_internal","event_handler")
    ;
  }
  if (param_2 == (undefined *)0x0) {
    if (param_3 != -1) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"event",
                       "E (%lu) %s: registering to any event base with specific id unsupported\n",
                       uVar2,"event");
      return 0x102;
    }
    param_2 = &DAT_ram_481d743c;
  }
  FUN_ram_4ff3b744(*(undefined4 *)(param_1 + 0x10),0xffffffff);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = iVar1;
  if (iVar1 != 0) {
    do {
      iVar1 = iVar3;
      iVar3 = *(int *)(iVar1 + 8);
    } while (*(int *)(iVar1 + 8) != 0);
    if (((param_2 != &DAT_ram_481d743c) || (param_3 != -1)) || (*(int *)(iVar1 + 4) == 0)) {
      uVar2 = FUN_ram_481a3ff4(iVar1,param_2,param_3,param_4,param_5,param_6,param_7);
      goto LAB_ram_481a4778;
    }
  }
  iVar3 = FUN_ram_4ff45080(1,0xc);
  if (iVar3 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"event","E (%lu) %s: alloc for new loop node failed\n",uVar2,"event");
  }
  else {
    iVar4 = FUN_ram_481a3ff4(iVar3,param_2,param_3,param_4,param_5,param_6,param_7);
    if (iVar4 == 0) {
      uVar2 = 0;
      if (iVar1 == 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar3;
        *(undefined4 *)(iVar3 + 8) = uVar5;
      }
      else {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar1 + 8);
        *(int *)(iVar1 + 8) = iVar3;
      }
      goto LAB_ram_481a4778;
    }
    thunk_FUN_ram_4ff209c6(iVar3);
  }
  uVar2 = 0x101;
LAB_ram_481a4778:
  FUN_ram_4ff3b1a4(*(undefined4 *)(param_1 + 0x10));
  return uVar2;
}


