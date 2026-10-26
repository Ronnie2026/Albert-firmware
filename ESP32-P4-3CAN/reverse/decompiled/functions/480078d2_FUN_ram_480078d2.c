/* Firmware entry: 0x480078d2 */

uint FUN_ram_480078d2(char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *param_1;
  if (((((cVar1 == '/') && (param_1[1] == '0')) && (param_1[2] == '\0')) ||
      (((cVar1 == '/' && (param_1[1] == '1')) && (param_1[2] == '\0')))) ||
     (((cVar1 == '/' && (param_1[1] == '2')) && (param_1[2] == '\0')))) {
    uVar2 = 0;
    if (param_2 != 0) {
      if (((param_2 & 6) != 0) && (uVar2 = param_2 & 1, uVar2 == 0)) {
        return 0;
      }
      puVar3 = (undefined4 *)FUN_ram_4819bf88(uVar2);
      *puVar3 = 0xd;
      uVar2 = 0xffffffff;
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_ram_4819bf88();
    *puVar3 = 2;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


