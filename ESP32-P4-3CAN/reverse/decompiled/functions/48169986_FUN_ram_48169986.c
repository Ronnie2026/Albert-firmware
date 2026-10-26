/* Firmware entry: 0x48169986 */

int FUN_ram_48169986(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_s_WIFI_EVENT_ram_481c1dec_ram_481f4c60;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e284 == '\0') {
    iVar2 = FUN_ram_481a3b06(PTR_s_WIFI_EVENT_ram_481c1dec_ram_481f4c60,2,&LAB_ram_48169756,0);
    if ((((((iVar2 != 0) || (iVar2 = FUN_ram_481a3b06(puVar1,3,&LAB_ram_48169630,0), iVar2 != 0)) ||
          (iVar2 = FUN_ram_481a3b06(puVar1,4,FUN_ram_48169776,0), iVar2 != 0)) ||
         ((iVar2 = FUN_ram_481a3b06(puVar1,5,&LAB_ram_48169766,0), iVar2 != 0 ||
          (iVar2 = FUN_ram_481a3b06(puVar1,0xc,&LAB_ram_48169746,0), iVar2 != 0)))) ||
        ((iVar2 = FUN_ram_481a3b06(puVar1,0xd,&LAB_ram_48169620,0), iVar2 != 0 ||
         (iVar2 = FUN_ram_481a3b06(PTR_s_IP_EVENT_ram_481da530_ram_48237730,0,FUN_ram_48169868,0),
         iVar2 != 0)))) ||
       ((iVar2 = FUN_ram_48000774(thunk_FUN_ram_4800f630), iVar2 != 0 && (iVar2 != 0x103)))) {
      FUN_ram_481698e2();
      return iVar2;
    }
    DAT_ram_4ff6e284 = '\x01';
  }
  return 0;
}


