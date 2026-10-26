/* Firmware entry: 0x4802e9b4 */

bool FUN_ram_4802e9b4(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_dc [201];
  undefined1 auStack_13 [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(local_dc,0,0xc9);
  iVar2 = FUN_ram_4819ad74(local_dc,0xc9,"Bearer %s",param_2 + 0x25e);
  if (((iVar2 - 8U < 0xc1) &&
      (iVar2 = FUN_ram_48166d90(param_1,&DAT_ram_481c3da8,"tesla.srlt.cc"), iVar2 == 0)) &&
     (iVar2 = FUN_ram_48166d90(param_1,"Authorization",local_dc), iVar2 == 0)) {
    iVar2 = FUN_ram_48166d90(param_1,"Cache-Control","no-store");
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  puVar3 = local_dc;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  } while (puVar3 != auStack_13);
  return bVar1;
}


