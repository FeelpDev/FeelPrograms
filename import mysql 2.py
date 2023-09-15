import mysql.connector

# Configuração da conexão com o MySQL
db_config = {
    'host': 'localhost',
    'user': 'root',
    'password': '#Frankie321',
    'database': 'sakila',
}

# Função para executar consultas e imprimir os resultados
def executar_consulta(query):
    try:
        conn = mysql.connector.connect(**db_config)
        cursor = conn.cursor()
        cursor.execute(query)

        for row in cursor.fetchall():
            print(row)

    except mysql.connector.Error as err:
        print(f"Erro: {err}")
    finally:
        cursor.close()
        conn.close()

# Consulta para listar todos os atores
consulta_listar_atores = "SELECT * FROM actor"

# Consulta para listar atores cujo primeiro nome é "Alan"
consulta_atores_com_nome_alan = "SELECT * FROM actor WHERE first_name = 'Alan'"

# Consulta para listar atores cujo primeiro nome é "Burt" e último nome é "Temple"
consulta_atores_com_nome_burt_temple = "SELECT * FROM actor WHERE first_name = 'Burt' AND last_name = 'Temple'"

# Executar as consultas
print("Lista de todos os atores:")
executar_consulta(consulta_listar_atores)

print("\nAtores com o primeiro nome 'Alan':")
executar_consulta(consulta_atores_com_nome_alan)

print("\nAtores com o primeiro nome 'Burt' e último nome 'Temple':")
executar_consulta(consulta_atores_com_nome_burt_temple)
