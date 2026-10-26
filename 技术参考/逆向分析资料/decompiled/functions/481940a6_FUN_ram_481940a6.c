/* Firmware entry: 0x481940a6 */

int * FUN_ram_481940a6(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_4ff45080(1,4);
  if (piVar1 == (int *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"transport","E (%lu) %s: %s(%d): %s\n",uVar3,"transport",
                     "esp_transport_init_foundation_transport",0x17,"Memory exhausted");
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = FUN_ram_4ff45080(1,0x10);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"transport","E (%lu) %s: %s(%d): %s\n",uVar3,"transport",
                       "esp_transport_init_foundation_transport",0x19,"Memory exhausted");
      thunk_FUN_ram_4ff209c6(piVar1);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}


