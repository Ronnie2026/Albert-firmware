/* Firmware entry: 0x48193108 */

int FUN_ram_48193108(void)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff45080(1,8);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"transport","E (%lu) %s: %s(%d): %s\n",uVar2,"transport",
                     "esp_transport_list_init",0x26,"Memory exhausted");
  }
  else {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return iVar1;
}


