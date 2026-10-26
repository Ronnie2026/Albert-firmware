/* Firmware entry: 0x481698e2 */

void FUN_ram_481698e2(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_WIFI_EVENT_ram_481c1dec_ram_481f4c60;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_481a3b46(PTR_s_WIFI_EVENT_ram_481c1dec_ram_481f4c60,2,&LAB_ram_48169756);
  FUN_ram_481a3b46(puVar1,3,&LAB_ram_48169630);
  FUN_ram_481a3b46(puVar1,4,FUN_ram_48169776);
  FUN_ram_481a3b46(puVar1,5,&LAB_ram_48169766);
  FUN_ram_481a3b46(puVar1,0xc,&LAB_ram_48169746);
  FUN_ram_481a3b46(puVar1,0xd,&LAB_ram_48169620);
  FUN_ram_481a3b46(PTR_s_IP_EVENT_ram_481da530_ram_48237730,0,FUN_ram_48169868);
  FUN_ram_480007aa(thunk_FUN_ram_4800f630);
  DAT_ram_4ff6e284 = 0;
  return;
}


