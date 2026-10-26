/* Firmware entry: 0x4815e168 */

undefined4 * FUN_ram_4815e168(char *param_1)

{
  undefined4 *puVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar2 = strlen(param_1);
  puVar1 = DAT_ram_4ff6e278;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    __s = (char *)*puVar1;
    sVar3 = strlen(__s);
    if ((sVar3 == sVar2) && (iVar4 = FUN_ram_4ff453ae(param_1,__s), iVar4 == 0)) break;
    puVar1 = (undefined4 *)puVar1[7];
  }
  return puVar1;
}


