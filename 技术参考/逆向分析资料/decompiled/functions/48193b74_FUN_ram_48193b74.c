/* Firmware entry: 0x48193b74 */

int FUN_ram_48193b74(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48193298();
  if (iVar1 != 0) {
    iVar2 = FUN_ram_481940a6();
    *(int *)(iVar1 + 0x38) = iVar2;
    if (iVar2 == 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"transport_base","E (%lu) %s: %s(%d): %s\n",uVar3,"transport_base",
                       "esp_transport_base_init",0x22c,"Memory exhausted");
      thunk_FUN_ram_4ff209c6(iVar1);
    }
    else {
      iVar2 = FUN_ram_4ff45080(1,0x70);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x6c) = 0xffffffff;
        *(int *)(iVar1 + 8) = iVar2;
        return iVar1;
      }
      *(undefined4 *)(iVar1 + 8) = 0;
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"transport_base","E (%lu) %s: %s(%d): %s\n",uVar3,"transport_base",
                       "esp_transport_base_init",0x231,"Memory exhausted");
      thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x38));
      thunk_FUN_ram_4ff209c6(iVar1);
    }
  }
  return 0;
}


