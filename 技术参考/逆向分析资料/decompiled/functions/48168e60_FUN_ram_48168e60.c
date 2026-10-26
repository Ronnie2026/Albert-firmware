/* Firmware entry: 0x48168e60 */

int FUN_ram_48168e60(void)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff45080(1,8);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = iVar1;
    return iVar1;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"HTTP_HEADER","E (%lu) %s: %s(%d): Memory exhausted\n",uVar2,"HTTP_HEADER",
                   "http_header_init",0x25);
  return 0;
}


